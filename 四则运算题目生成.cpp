#include "stdafx.h"
#include "..\ConsoleApplication1\test.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(TestMethod1)//是否生成规定题目数量
        {
            a[0] = 1;//加法（1为需要，0为不需要）
            a[1] = 1;//减法（1为需要，0为不需要）
            a[2] = 1;//乘法（1为需要，0为不需要）
            a[3] = 1;//除法（1为需要，0为不需要）
            a[4] = 1;//文件输出（1为需要，0为不需要）
            int A = 2;//数值范围（1代表10，2代表100，3代表1000）
            int k = 1;//是否含有括号（1为需要，0为不需要）
            int count = 11;//题目数
            int s = 1;//是否进行小数运算（0为需要，1为不需要）
            int result;
            result = test(A, k, count, s);
            Assert::AreEqual(result, 11);
        }
        TEST_METHOD(TestMethod2)//是否生成带有规定运算符的运算式
        {
            a[0] = 1;
            a[1] = 1;
            a[2] = 1;
            a[3] = 1;
            a[4] = 1;
            int A = 2;
            int k = 1;
            int count = 11;
            int s = 1;
            int result;
            result = str(k);
            Assert::AreEqual(result, 1);
        }
    };
}