#include <stdio.h>
int main()
{
    const int size=3;
    int board[size][size];
    int i,j;
    int numOfX;
    int numOfO;
    int result=-1;//-1：没人赢  1：X赢  0:O赢

    //读入矩阵
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d",&board[i][j]);
        }
        
    }

    //检查行
    for (int i = 0; i < size&&result==-1; i++)
    {
        numOfO=numOfX=0;
        for (int j = 0; j < size&&result==-1; j++)
        {
            if (board[i][j]==1)
            {
                numOfX++;
            }else{
                numOfO++;
            }
            
        }
        if (numOfO==size)
        {
            result=0;
        }else if (numOfX==size)
        {
            result=1;
        }
        
    }
    //检查列
    for (int j = 0; j < size&&result==-1; j++)
    {
        numOfO=numOfX=0;
        for (int i = 0; i < size&&result==-1; i++)
        {
            if (board[i][j]==1)
            {
                numOfX++;
            }else{
                numOfO++;
            }
            
        }
        if (numOfO==size)
        {
            result=0;
        }else if (numOfX==size)
        {
            result=1;
        }

        
    }
    
    //检查对角线
    numOfO=numOfX=0;
    for (int i = 0; i < size; i++)
    {
        if (board[i][i]==1)
        {
            numOfX++;
        }else{
            numOfO++;
        }
        if (numOfO==size)
        {
            result=0;
        }else if (numOfX==size)
        {
            result=1;
        }
    }
    numOfO=numOfX=0;
    for (int i = 0; i < size; i++)
    {
        if (board[i][size-1-i]==1)
        {
            numOfX++;
        }else{
            numOfO++;
        }
        if (numOfO==size)
        {
            result=0;
        }else if (numOfX==size)
        {
            result=1;
        }
    }
    printf("%d",result);
    return 0;
    }