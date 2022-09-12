#include<bits/stdc++.h>
void addSolution(vector<vector<int>> &ans,vector<vector<int>> &board,int n){
    vector<int> temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            temp.push_back(board[i][j]);
        }
    }
    ans.push_back(temp);
}
bool isSafe(int row,int col,vector<vector<int>> &board,int n)
{
    //not in same row/col/diagonal
    int x=row;
    int y=col;
    //check for same row
    while(y>=0 )
    {
        if(board[x][y]==1)
        {
            return false;
        }
        y--;
       
    }
    x=row;
    y=col;
    //check for diagonals
    while(x>=0 && y>=0)
    {
        if(board[x][y]==1)
        {
            return false;
        }
        y--;
        x--; //upper left diagonal
       
    }
    x=row;
    y=col;
    //check for diagonals
    while(x<n && y>=0)
    {
        if(board[x][y]==1)
        {
            return false;
        }
        y--;
        x++; 
       
    }
    return true;
}
void solve(int col,vector<vector<int>> &ans,vector<vector<int>>&board,int n)
{
    //base case
    if(col==n) 
    {
        addSolution(ans,board,n);
        return ;
    }
    //solve 1 case and rest recursion sambhaal lega
    for(int row=0;row<n;row++)
    {
        if(isSafe(row,col,board,n))
        {
            board[row][col]=1;
            solve(col+1,ans,board,n);
            //BT
            board[row][col]=0;
        }
    }
    
}
vector<vector<int>> nQueens(int n)
{
	// Write your code here
    vector<vector<int>> board(n,vector<int>(n,0));
    vector<vector<int>> ans;
    solve(0,ans,board,n);
    return ans;
	
}