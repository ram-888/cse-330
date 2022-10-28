class Solution 
{
    public:
   bool SolveSudoku(int grid[N][N])  
   { 
       for(int i=0;i<N;i++)
       {
           for(int j=0;j<N;j++)
           {
               if(grid[i][j]==0)
               {
                   for(int k=1;k<=9;k++)
                   {
                       if(isvalid(grid,i,j,k))
                       {
                           grid[i][j]=k;
                       if(SolveSudoku(grid)==true)
                       {
                           return true;
                       }
                       else{
                           grid[i][j]=0;
                       }
                       }
                   }
                   return false;
               }
           }
       }
       return true;
   }
   
   bool isvalid(int grid[N][N],int row,int col,int k)
   {
       for(int i=0;i<9;i++)
       {
           if(grid[i][col]==k)
           {
               return false;
           }
           else if(grid[row][i]==k)
           {
               return false;
           }
           else if(grid[3*(row/3)+i/3][3*(col/3)+i%3]==k)
          { return false;}
       }
       return true;
   }
   
   //Function to print grids of the Sudoku.
   void printGrid (int grid[N][N]) 
   {
      for(int i=0;i<N;i++)
      {
          for(int j=0;j<N;j++)
          {
              cout<<grid[i][j]<<" ";
          }
          
      }
   }
};
