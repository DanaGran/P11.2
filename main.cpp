#include <iostream>
#include <vector>

int main(){

    int p;
    std::string nume_prieten;
    int numar_joc;
    std::string joc , joc_cautat ;
    std::vector<std::string>jocuri;

    std::cin>>p;
    for( int i=0;i<p ;i++){

        std::cin>>nume_prieten>>numar_joc;
        for( int j=0;j<numar_joc;j++){
            std::cin>>joc;
            jocuri.push_back(joc);
        }

    }
    std::cin>>joc_cautat;
    int ok=0;
    for( auto x: jocuri){

        if(x==joc_cautat)ok++;
    }

    std::cout<<ok;



    return 0;
}