
from sklearn import datasets
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression

# アイリスデータセットをロードする
iris = datasets.load_iris()
X = iris.data
y = iris.target

# データセットを学習用とテスト用に分割する
X_train, X_test, y_train, y_test = train_test_split(X, y)

# ロジスティック回帰で学習モデルを定義する
classifier = LogisticRegression()

# 学習させる
classifier.fit(X_train, y_train)

# テスト用のデータを用いて、学習モデルの正解率を測定する
score = classifier.score(X_test, y_test)
print('正解率：', score)

