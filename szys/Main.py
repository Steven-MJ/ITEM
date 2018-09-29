import sys
from Prepare import Prepare
from Text import Text
from FileRW import FileRW
import datetime
start=datetime.datetime.now()

# 根据命令行参数初始化生成包含题目列表的对象
prepare=Prepare(sys.argv)
questionList=prepare.getQuestionList()

output = FileRW()
output.outputExercise(questionList)
output.outputAnswer(questionList)

text=Text(questionList)
text.begin()
text.printResult()
output.outputResult(questionList,text.inputAnswer)
# else:
#     print("无题目生成")
R, W = prepare.compareFile(prepare.exercisefile,prepare.answerfile)
output.outputCompare(R,W)

end = datetime.datetime.now()
print('Running time: %s Seconds'%(end-start))

