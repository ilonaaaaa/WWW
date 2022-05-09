#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main()
{
    ifstream lyrics("WiWiWe.txt");//on charge le fichier texte en flux entrant
    string l;
    map <string, int> map;//cr�ation d'une liste qui lie des strings � des entiers

    while (lyrics >> l)//associe les lyrics � la string l
        ++map[l];//une nouvelle case sera cr��e � chaque mot, ajoutant ensuite 1 � chaque fois que le mot appara�t

    typedef std::map <std::string, int> :: const_iterator iter;//on associe un iterateur � une map de string et d'entier
    for (iter it = map.begin(); it != map.end(); ++it)//l'iterateur est associ� � notre map pour la lire du d�but � la fin, case par case
        cout << "le nombre d'occurence du mot " << it->first << " est " << it->second << endl;//on demande � l'iterateur de montrer d'abord la string puis l'entier dans l'affichage

    return 0;
}