
import unittest
from ChatGPTChatterParallelMemory import ChatGPTChatterParallelMemory

class TestChatGPTChatterParallelMemory(unittest.TestCase):

    def test_unittest(self):
        # テスト用のデータの準備
        apiKey = "testApiKey"
        roleString = "testRoleString"
        isDisplayTokenCount = True

        # ChatGPTChatterParallelMemoryクラスのインスタンスを作成し、そのunittestメソッドをテストする
        chatter = ChatGPTChatterParallelMemory(apiKey, roleString, isDisplayTokenCount)
        result = chatter.unittest()

        # テスト結果を検証する（ここでは、Trueが返ってくることを想定）
        self.assertTrue(result)

if __name__ == '__main__':
    unittest.main()

