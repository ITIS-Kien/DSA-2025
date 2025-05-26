#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef long long ll;

// Hàm tìm bộ 3 ước số có tổng bằng n và chênh lệch nhỏ nhất
void findDivisors(ll n) {
    // Tạo mảng lưu trữ các ước số
    ll divisors[100000];
    int count = 0;
    
    // Tìm tất cả các ước số của n
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            divisors[count++] = i;
            
            // Nếu i khác n/i thì thêm n/i vào danh sách ước số
            if (i != n / i) {
                divisors[count++] = n / i;
            }
        }
    }
    
    // Sắp xếp mảng các ước số
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (divisors[i] > divisors[j]) {
                ll temp = divisors[i];
                divisors[i] = divisors[j];
                divisors[j] = temp;
            }
        }
    }
    
    // Khởi tạo kết quả
    ll a1 = -1, a2 = -1, a3 = -1;
    ll minDiff = 1e18;
    int found = 0;
    
    // Duyệt qua từng cặp ước số i, j
    for (int i = 0; i < count; i++) {
        for (int j = i; j < count; j++) {
            ll third = n - divisors[i] - divisors[j];
            
            // Kiểm tra xem third có phải là ước của n không và là giá trị dương
            if (third > 0 && n % third == 0) {
                // Tính chênh lệch max - min
                ll maxVal = divisors[i];
                ll minVal = divisors[i];
                
                if (divisors[j] > maxVal) maxVal = divisors[j];
                if (divisors[j] < minVal) minVal = divisors[j];
                
                if (third > maxVal) maxVal = third;
                if (third < minVal) minVal = third;
                
                ll diff = maxVal - minVal;
                
                // Cập nhật nếu tìm được bộ 3 có chênh lệch nhỏ hơn
                if (diff < minDiff) {
                    minDiff = diff;
                    a1 = divisors[i];
                    a2 = divisors[j];
                    a3 = third;
                    found = 1;
                }
            }
        }
    }
    
    // In kết quả
    if (found) {
        printf("%lld %lld %lld\n", a1, a2, a3);
    } else {
        printf("IMPOSSIBLE\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        ll n;
        scanf("%lld", &n);
        findDivisors(n);
    }
    
    return 0;
}
