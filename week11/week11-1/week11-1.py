# week11-1.py
# Main: Hash Map, Hash Set (在 資料結構演算法 中教過的 Hash 雜湊)
table = {} # Python 用 {}，代表字典， 也就是 Hash Table (Hash Map, Hash Set)
table[9977341] = 9
table[4433997] = 4

print(table[9977341]) # 印出9
print(table[4433997]) # 印出4
# print(table) # 印出整個字典
# print(table[0]) # 沒有這個key，會出錯

if 0 not in table:
  print("table[0]不存在")
