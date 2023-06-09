# 冒泡排序
arr = [1, 3, 2, 5, 4, 6, 7, 9, 8, 0]
# 1.外层循环控制比较的轮数
for i in range(len(arr) - 1):
    # 2.内层循环控制每轮比较的次数
    for j in range(len(arr) - i - 1):
        # 3.如果前一个数大于后一个数，则交换两个数的位置
        if arr[j] > arr[j + 1]:
            arr[j], arr[j + 1] = arr[j + 1], arr[j]
print(arr)

# 快速排序
arr = [1, 3, 2, 5, 4, 6, 7, 9, 8, 0]


# 1.定义一个函数，用来实现快速排序
def quick_sort(arr):
    # 2.递归出口
    if len(arr) < 2:
        return arr
    # 3.定义基准值
    pivot = arr[0]
    # 4.定义左右两个列表
    less = [i for i in arr[1:] if i <= pivot]
    greater = [i for i in arr[1:] if i > pivot]
    # 5.递归调用
    return quick_sort(less) + [pivot] + quick_sort(greater)


print(quick_sort(arr))

# 选择排序
arr = [1, 3, 2, 5, 4, 6, 7, 9, 8, 0]
# 1.外层循环控制比较的轮数
for i in range(len(arr) - 1):
    # 2.定义一个变量，用来保存最小值的下标
    min_index = i
    # 3.内层循环控制每轮比较的次数
    for j in range(i + 1, len(arr)):
        # 4.如果后面的数小于前面的数，则交换两个数的位置
        if arr[min_index] > arr[j]:
            min_index = j
    # 5.交换位置
    arr[i], arr[min_index] = arr[min_index], arr[i]
print(arr)

# 插入排序
arr = [1, 3, 2, 5, 4, 6, 7, 9, 8, 0]
# 1.外层循环控制比较的轮数
for i in range(1, len(arr)):
    # 2.定义一个变量，用来保存当前要比较的数
    temp = arr[i]
    # 3.内层循环控制每轮比较的次数
    for j in range(i - 1, -1, -1):
        # 4.如果当前要比较的数小于前一个数，则交换两个数的位置
        if temp < arr[j]:
            arr[j + 1] = arr[j]
            arr[j] = temp
print(arr)

# 希尔排序
arr = [1, 3, 2, 5, 4, 6, 7, 9, 8, 0]
# 1.定义一个变量，用来保存步长
gap = len(arr) // 2
# 2.循环控制步长
while gap > 0:
    # 3.循环控制每轮比较的次数
    for i in range(gap, len(arr)):
        # 4.定义一个变量，用来保存当前要比较的数
        temp = arr[i]
        # 5.内层循环控制每轮比较的次数
        j = i
        while j >= gap and temp < arr[j - gap]:
            arr[j] = arr[j - gap]
            j -= gap
        arr[j] = temp
    gap //= 2
print(arr)

# 归并排序
arr = [1, 3, 2, 5, 4, 6, 7, 9, 8, 0]


# 1.定义一个函数，用来实现归并排序
def merge_sort(arr):
    # 2.递归出口
    if len(arr) < 2:
        return arr
    # 3.找到中间值
    mid = len(arr) // 2
    # 4.分别对左右两个列表进行处理
    left = merge_sort(arr[:mid])
    right = merge_sort(arr[mid:])
    # 5.合并两个有序列表
    return merge(left, right)


# 6.定义一个函数，用来合并两个有序列表
def merge(left, right):
    # 7.定义一个列表，用来保存最终排序后的结果
    result = []
    # 8.定义两个指针，分别指向两个列表的起始位置
    i = j = 0
    # 9.循环比较两个列表中的元素
    while i < len(left) and j < len(right):
        # 10.如果左边的元素小于右边的元素，则将左边的元素添加到结果列表中
        if left[i] < right[j]:
            result.append(left[i])
            i += 1
        # 11.否则，将右边的元素添加到结果列表中
        else:
            result.append(right[j])
            j += 1
    # 12.将多余的元素添加到结果列表中
    result += left[i:]
    result += right[j:]
    # 13.返回结果列表
    return result


print(merge_sort(arr))

# 堆排序，时间复杂度为O(nlogn)
arr = [1, 3, 2, 5, 4, 6, 7, 9, 8, 0]


# 1.定义一个函数，用来实现堆排序
def heap_sort(arr):
    # 2.创建一个大顶堆
    build_max_heap(arr)
    # 3.循环遍历列表，将堆顶的元素与末尾元素进行交换，然后重新调整堆
    for i in range(len(arr) - 1, -1, -1):
        arr[0], arr[i] = arr[i], arr[0]
        adjust_heap(arr, 0, i)


# 4.创建一个大顶堆
def build_max_heap(arr):
    # 5.从最后一个非叶子节点开始，依次向上调整
    for i in range(len(arr) // 2 - 1, -1, -1):
        adjust_heap(arr, i, len(arr))


# 6.调整堆
def adjust_heap(arr, i, length):
    # 7.定义一个变量，保存当前父节点的值
    temp = arr[i]
    # 8.循环遍历子节点
    for j in range(2 * i + 1, length, 2 * i + 1):
        # 9.找到子节点中的最大值
        if j + 1 < length and arr[j] < arr[j + 1]:
            j += 1
        # 10.如果父节点的值小于子节点中的最大值，则交换两个节点的位置
        if arr[j] > temp:
            arr[i] = arr[j]
            i = j
        # 11.否则，跳出循环
        else:
            break
    # 12.将父节点的值赋值给子节点
    arr[i] = temp


heap_sort(arr)
print(arr)

# 快速排序
arr = [1, 3, 2, 5, 4, 6, 7, 9, 8, 0]


# 1.定义一个函数，用来实现快速排序
def quick_sort(arr, left, right):
    # 2.递归出口
    if left >= right:
        return
    # 3.定义两个变量，分别保存左右两个指针
    low = left
    high = right
    # 4.将第一个值作为基准值
    temp = arr[left]
    # 5.循环遍历列表
    while low < high:
        # 6.从右往左遍历，找到第一个小于基准值的数
        while low < high and arr[high] >= temp:
            high -= 1
        # 7.将右边的值赋值给左边的值
        arr[low] = arr[high]
        # 8.从左往右遍历，找到第一个大于基准值的数
        while low < high and arr[low] < temp:
            low += 1
        # 9.将左边的值赋值给右边的值
        arr[high] = arr[low]
    # 10.将基准值赋值给左边的值
    arr[low] = temp
    # 11.递归调用
    quick_sort(arr, left, low - 1)
    quick_sort(arr, low + 1, right)


quick_sort(arr, 0, len(arr) - 1)
print(arr)

# 二分查找，前提是有序列表，时间复杂度O(logn)
arr = [1, 3, 2, 5, 4, 6, 7, 9, 8, 0]


# 1.定义一个函数，用来实现二分查找
def binary_search(arr, target):
    # 2.定义两个变量，分别保存左右两个指针
    left = 0
    right = len(arr) - 1
    # 3.循环遍历列表
    while left <= right:
        # 4.找到中间值
        mid = (left + right) // 2
        # 5.如果中间值等于目标值，则返回中间值的下标
        if arr[mid] == target:
            return mid
        # 6.如果中间值大于目标值，则将右指针移动到中间值的左边
        elif arr[mid] > target:
            right = mid - 1
        # 7.如果中间值小于目标值，则将左指针移动到中间值的右边
        else:
            left = mid + 1
    # 8.如果没有找到目标值，则返回-1
    return -1


print(binary_search(arr, 5))

# 二叉树
