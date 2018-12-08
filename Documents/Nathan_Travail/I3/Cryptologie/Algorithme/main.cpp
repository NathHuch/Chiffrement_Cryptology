#include <iostream>
#include "Person.h"

using namespace std;

int main()
{

    // Création des Intervenants
    Person Julien("Julien");
    Person Nathan;

    // Début de la discussion

    //1 : Encryption du message de la part de Julien
    Nathan = Julien.envoyerMessage(Nathan,"Salut mec");
    cout << Nathan.getMessage() << endl;
    return 0;
}
