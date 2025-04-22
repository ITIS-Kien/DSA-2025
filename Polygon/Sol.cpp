#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define MOD 1000000007
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#pragma GCC optimize("Ofast")

//Hàm chèn số 0 vào xâu ít kí tự hơn 
//Để đảm bảo độ dài 2 xâu bằng nhau
void len(string &a, string &b) {
	int lena = a.size(), lenb = b.size();
	if(lena < lenb) a = string(lenb - lena, '0') + a;
	else if(lena > lenb) b = string(lena - lenb, '0') + b;
}

//Hàm tìm vị trí số 1 đầu tiền
//Để loại bỏ số 0 thừa phía trước
string era(string s){
	int i = 0;
	while(i < s.size() && s[i] == '0') ++i;
	if(i == s.size()) return "0";
	return s.substr(i);
}
int main() {
    BOOST;
    int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s1, s2, ans = "";
		string s;
		cin >> s >> s1;
        // Nếu NOT thì chỉ nhập xâu s1
		if(s != "NOT") {
			cin >> s2;
            // Đảm bảo độ dài 2 xâu bằng nhau
			len(s1, s2);
            // Duyệt từ cuối xâu đi lên
			for(int i = s1.size() - 1; i >= 0; --i) {
				if(s == "AND") {
                    // Phép toàn AND bằng 1 khi và chỉ khi cả 2 bit bằng 1
                    if(s1[i] == '1' and s2[i] == '1') ans = "1" + ans;
                    else ans = "0" + ans;
                } else if(s == "OR") {
                    // Phép toàn OR bằng 0 khi và chỉ khi cả 2 bit bằng 0
                    if(s1[i] == '0' and s2[i] == '0') ans = "0" + ans;
                    else ans = "1" + ans;
                } else {
                    // Phép toàn XOR bằng 0 khi và chỉ khi cả 2 bit bằng nhau
                    if(s1[i] == s2[i]) ans = "0" + ans;
                    else ans = "1" + ans;
                }
			}
		} else { // Phép toán NOT là phép toán đảo bit, bit 1 thành 0 và ngược lại
			for(int i = s1.size() - 1; i >= 0; --i) {
                if (s1[i] == '0') ans = "1" + ans;
                else ans = "0" + ans;
			}
		}
        // Loại bỏ các số 0 thừa ở đầu xâu
		cout << era(ans) << '\n';
	}
}