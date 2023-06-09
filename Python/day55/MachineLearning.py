# 鸢尾花数据集案例

# 1. 导入数据集
from sklearn.datasets import load_iris

iris = load_iris()  # 返回的是一个字典

# 数据集的基本信息
# print('数据集的基本信息：\n', iris.DESCR)

# 数据集的特征值
# print('数据集的特征值：\n', iris.data)

# 2. 数据集划分
from sklearn.model_selection import train_test_split

x_train, x_test, y_train, y_test = train_test_split(iris.data,
                                                    iris.target,
                                                    test_size=0.2,
                                                    random_state=22)

print('训练集的特征值：\n', x_train)
print('测试集的特征值：\n', x_test)
print('训练集的目标值：\n', y_train)
print('测试集的目标值：\n', y_test)

# 3. 特征工程
from sklearn.preprocessing import StandardScaler
