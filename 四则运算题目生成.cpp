#include "stdafx.h"
#include "..\ConsoleApplication1\test.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(TestMethod1)//�Ƿ����ɹ涨��Ŀ����
        {
            a[0] = 1;//�ӷ���1Ϊ��Ҫ��0Ϊ����Ҫ��
            a[1] = 1;//������1Ϊ��Ҫ��0Ϊ����Ҫ��
            a[2] = 1;//�˷���1Ϊ��Ҫ��0Ϊ����Ҫ��
            a[3] = 1;//������1Ϊ��Ҫ��0Ϊ����Ҫ��
            a[4] = 1;//�ļ������1Ϊ��Ҫ��0Ϊ����Ҫ��
            int A = 2;//��ֵ��Χ��1����10��2����100��3����1000��
            int k = 1;//�Ƿ������ţ�1Ϊ��Ҫ��0Ϊ����Ҫ��
            int count = 11;//��Ŀ��
            int s = 1;//�Ƿ����С�����㣨0Ϊ��Ҫ��1Ϊ����Ҫ��
            int result;
            result = test(A, k, count, s);
            Assert::AreEqual(result, 11);
        }
        TEST_METHOD(TestMethod2)//�Ƿ����ɴ��й涨�����������ʽ
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