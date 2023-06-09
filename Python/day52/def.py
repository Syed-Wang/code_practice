# 在一组数组里找出不成对的两个元素
# 例如：[1,2,3,4,5,6,7,8,1,2,3,4,5,6,7,8,9,10]，找出9和10
# 使用异或解决
# 1. 两个相同的数异或为0
# 2. 一个数和0异或为本身

def find(arr):
    # 1. 先把所有的元素异或
    eor = 0
    for i in arr:
        eor ^= i
    # 2. 找到eor中最右侧的1
    rightone = eor & (~eor + 1)
    # 3. 把数组分成两组，一组是eor最右侧的1为1的，一组是eor最右侧的1为0的
    eor1 = 0
    eor2 = 0
    for i in arr:
        if i & rightone == 0:
            eor1 ^= i
        else:
            eor2 ^= i
    return eor1, eor2


if __name__ == '__main__':
    arr = [3, 4, 5, 3, 4, 5, 6, 8]
    print(find(arr))
