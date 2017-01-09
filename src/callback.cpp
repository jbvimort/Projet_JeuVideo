#include "callback.hpp"
#include <iostream>

callback::callback(is::ISceneManager *data_smgr)
{
    smgr = data_smgr;
}

void callback::OnAnimationEnd(is::IAnimatedMeshSceneNode* node)
{
    //Cette fonction est appelée a la fin de l'animation de mort d'un ennemi, elle va permettre la spression de l'ennemis
    smgr->addToDeletionQueue(node);
}



