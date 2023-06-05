#include <bits/stdc++.h>

vector<long long int> generateRow(int rowNum){
  vector<long long int> row;
  long long int ans=1;
  row.emplace_back(ans);
  for(int col=1; col<rowNum ; col++){
    ans = (ans * (rowNum-col)) / col;
    row.emplace_back(ans);
  }
  return row;
}

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> triangle;
  for(int i = 1; i<=n ; i++){
      triangle.emplace_back(generateRow(i));
  }

  return triangle;
  

}
