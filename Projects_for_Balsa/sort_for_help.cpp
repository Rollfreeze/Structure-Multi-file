#include "stdafx.h"
#include "Prototypes.h"

void sort_for_help(int rangeOfArray, int* Array)
{
    int counter = 0; // ������� ��� ���-�� �����. ���������

    for (int i = 0; i < rangeOfArray; i++) // ������ ������� ����� ���������
    {
        if ((abs(Array[i])) <= 1)
        {
            counter++;
        }
    }

    //��� ������ � ������� �� ��� ��������� �������
    //���� �������� �������� �� ��������, ������� abs <= 1
    //������ - ��� ��� ��������� ��������

    int* tempArrayTrue = new int[counter]; //�����. ��������
    int* tempArrayFalse = new int[rangeOfArray - counter]; //�������. ��������

    int j = 0;
    int k = 0;

    //���������� ��� ������� ���������� ������� �� ��� ������
    for (int i = 0; i < rangeOfArray; i++)
    {
        if ((abs(Array[i])) <= 1)
        {
            tempArrayTrue[j] = Array[i];
            j++;
        }
        else
        {
            tempArrayFalse[k] = Array[i];
            k++;
        }
    }

    //������ � ����, �������� ������� ������ ��-�����. ���� ������ = true �������� + false ��������
    int* sortedArray = new int[rangeOfArray];

    for (int i = 0; i < counter; i++)
    {
        sortedArray[i] = tempArrayTrue[i];
    }

    j = 0;

    for (int i = counter; i < rangeOfArray; i++)
    {
        sortedArray[i] = tempArrayFalse[j];
        j++;
    }

    //������� �� �����
    for (int i = 0; i < rangeOfArray; i++)
    {
        cout << sortedArray[i] << " ";
    }

    //����������� ������ ��, ��� ������ �� ����������!
    delete[] tempArrayTrue;
    delete[] tempArrayFalse;
    delete[] sortedArray;
}