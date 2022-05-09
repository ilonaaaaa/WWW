#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main()
{
    ifstream lyrics("WiWiWe.txt");//on charge le fichier texte en flux entrant
    string l;
    map <string, int> map;//création d'une liste qui lie des strings à des entiers

    while (lyrics >> l)//associe les lyrics à la string l
        ++map[l];//une nouvelle case sera créée à chaque mot, ajoutant ensuite 1 à chaque fois que le mot apparaît

    typedef std::map <std::string, int> :: const_iterator iter;//on associe un iterateur à une map de string et d'entier
    for (iter it = map.begin(); it != map.end(); ++it)//l'iterateur est associé à notre map pour la lire du début à la fin, case par case
        cout << "le nombre d'occurence du mot " << it->first << " est " << it->second << endl;//on demande à l'iterateur de montrer d'abord la string puis l'entier dans l'affichage

    return 0;
}