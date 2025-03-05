t = int(input())
for _ in range(t):
    s = input()
    st = []
    st.append(-1)
    res = 0
    for i in range(len(s)):
        if s[i] == '(':
            st.append(i)
        else:
            st.pop()
            if len(st) > 0:
                res = max(res, i - st[-1])
            else:
                st.append(i)
    print(res)
# Logic : Đánh dấu vị trí hợp lệ đầu tiên và vị trí không hợp lệ đầu tiên phía bên phải
# Lấy vị trí không hợp lệ đầu tiên bên phải trừ đi vị trí hợp lệ đầu tiên được đánh dấu
