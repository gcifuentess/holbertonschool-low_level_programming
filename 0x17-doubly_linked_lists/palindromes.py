#!/usr/bin/python3
if __name__ == "__main__":
    previous = 0
    current = 0
    for i in range(0,1000):
        for j in range(0, 1000):
            current = i * j
            current_str = str(current)
            len_c = len(current_str)
            current_arr = []
            palindrome = []
            for char_c in range(0, len_c):
                current_arr.append(current_str[char_c])
                palindrome.append(current_str[(len_c - 1) - char_c])
            if current_arr == palindrome:
                if current > previous:
                    previous = current
    print(previous)
