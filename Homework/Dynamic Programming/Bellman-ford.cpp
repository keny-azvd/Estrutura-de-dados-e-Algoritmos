#include <iostream>
#include <vector>

using namespace std;

vector<int> Bellman_ford(vector<int> dfs,int v,vector<string> peso){
    //inicializar nosso vetor, colocando zero na distancia que queremos
    int tam = dfs.size();
    int tam1 = peso.size();
    vector<int> T;
    for(int i =0;i<tam;i++){
        if(i == v-1){
            T.push_back(0);
        }
        else{
            T.push_back(1000);
        }
}
   for(int k =0;k<tam;k++){
    for(int t = 0;t<tam1;t++){
        string vertice = peso(t);
        if( )


    }



   }
return T;
};





int main(){
   vector<int> BF;
   for(int i=1;i<7;i++){
    BF.push_back(i);
  } // 123456
  vector <int> dfs = Bellman_ford(BF,6);

   for(int j=0;j<6;j++){
    cout << dfs[j] << "\n";
   }



return 0;
}
