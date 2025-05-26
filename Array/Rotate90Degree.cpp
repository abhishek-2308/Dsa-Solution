
void rotate(vector<vector<int> >& mat) {
    vector<vector<int>> ans;
   for (int i=0; i<mat.size(); i++){
       vector<int>temp;
       for (int j=mat.size()-1; j>=0; j--){
           temp.push_back(mat[j][i]);
       }
       ans.push_back(temp);
       
   }

mat= ans;
}