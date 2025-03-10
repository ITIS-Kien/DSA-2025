t = int(input())
for _ in range(t):
    s = input()
    s = list(reversed(s))  # Chuyển đổi đối tượng reversed thành danh sách
    st = []
    for i in s:
        if 'A' <= i <= 'Z':  # Kiểm tra ký tự có phải là chữ cái in hoa
            st.append(i)
        else:
            tmp = st[-1] + st[-2] + i
            st.pop()
            st.pop()
            st.append(tmp)
    print(st[-1])