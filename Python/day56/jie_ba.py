# jieba 提取中文关键词
import jieba

# 读取文件
with open('./三国演义.txt', 'r', encoding='utf-8') as f:
    txt = f.read()

# 提取关键词
words = jieba.lcut(txt)  # 返回列表
counts = {}  # 创建字典
for word in words:
    if len(word) == 1:  # 排除单个字符的分词结果
        continue
    else:
        counts[word] = counts.get(word, 0) + 1  # 统计词频

# 排序
items = list(counts.items())  # 将字典转换为列表
items.sort(key=lambda x: x[1], reverse=True)  # 按照词频降序排序

# 输出前10个
for i in range(10):
    word, count = items[i]  # 拆包
    print('{0:<10}{1:>5}'.format(word, count))  # 格式化输出
