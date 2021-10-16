#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void sol_print_puzzle(char **puzzle)
{
    int i, j;
    i = 0;
    while(i < 4)
    {
        j = 0;
        while(j < 4)
        {
            printf("%c ", puzzle[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    printf("*********");
    printf("\n");
}

bool is_vaild_value(int row, int col, char **puzzle, int value)
{
    //조건 
    int i;
    int j;

    i = 0;
    while(i <= row)
    {
        if(puzzle[i][col] == value + '0')
        {
            return false;
        }
        i++;
    }

    j = 0;
    while (j <= col)
    {
        if(puzzle[row][j] == value + '0')
        {
            return false;
        }
        j++;
    }

    return true;
}

bool is_vaild_by_condition(int row, int col, char **puzzle, char **conditions)
{
    int i;
    int j;
    



    return true;
}

void bt(int row, int col, char **puzzle)
{   
    int i;

    if (col == 4)
    {
        row += 1;
        col = 0;
    }

    if (row == 4)
    {
        //종료 
        sol_print_puzzle(puzzle);
        return ;
    }

    i = 1;
    while (i <= 4)
    {
        if(is_vaild_value(row, col, puzzle, i))
        {
            puzzle[row][col] = i + '0';
            bt(row, col+1, puzzle);
            puzzle[row][col] = 0 + '0';
        }
        i++;
    }    
}


int main() {
    int n = 4;
    char **puzzle;
    char **conditions;
    int i;
    int j;
    int k;
    //char condition[] = "4321122243211222";
    int size_of_con;
    int one_side_len;

    //condition = "4321122243211222";
    //size_of_con = sizeof(condition);
    //one_side_len = (size_of_con-1) / 4;

    //printf("%d", size_of_con); // 왜 17 나오지 16개인데.. 
    //printf("%d", one_side_len);


    // conditions = (char **)malloc(sizeof(char) * one_side_len);
    // i = 0;
    // while (i < one_side_len)
    // {
    //     conditions[i] = (char *)malloc(sizeof(char) * one_side_len);
    //     i++;
    // }
    // k = 0;
    // i = 0;
    // while (i < one_side_len)
    // {
    //     j = 0;
    //     while (j < one_side_len)
    //     {
    //         conditions[i][j] = condition[k];
    //         printf("%c", condition);
    //         k++;
    //         j++;
    //     }
    //     i++;
    // }

    // i = 0;
    // while (i < one_side_len)
    // {
    //     j = 0;
    //     while (j < one_side_len)
    //     {
    //         printf("ddd");
    //         printf("%c", conditions[i][j]);
    //         j++;
    //     }
    //     i++;
    // }


    puzzle = (char **)malloc(sizeof(char)*4);
    i =0 ;
    while(i < 4){
        puzzle[i] = (char *)malloc(sizeof(char)*4);
        i++;
    }

    char **check;
    check = (char **)malloc(sizeof(char)*4);
    i = 0;
    while(i < 4){
        check[i] = (char *)malloc(sizeof(char)*4);
        i++;
    }

    i = 0;
    while (i<4)
    {
        j = 0;
        while ( j<4)
        {
            check[i][j] = '0';
            j++;
        }

        i++;
    }

    bt(0, 0, puzzle);

    
    i = 0;
    while (i < 4)
    {   
        free(conditions[i]);
        free(check[i]);
        free(puzzle[i]);
        i++;
    }

    free(conditions);
    free(check);
    free(puzzle);


	return 0;
}