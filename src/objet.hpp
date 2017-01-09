#ifndef OBJET_HPP
#define OBJET_HPP
#include <irrlicht.h>
#include <vector>
#include <iostream>

using namespace irr;

namespace ic = irr::core;
namespace is = irr::scene;
namespace iv = irr::video;
namespace ig = irr::gui;



class objet
{
public:

    enum type{armor1,
             armor2,
             chest,
             box,
             wood};

    objet(ic::vector3df position, ic::vector3df rotation, ic::vector3df scale, type Type, scene::ISceneManager *smgr, is::IMetaTriangleSelector *meta_selector);

    ic::vector3df const& get_position() const;

    ic::vector3df const& get_rotation() const;

    ic::vector3df  const& get_scale() const;

    type const& get_type() const;

    is::IAnimatedMesh* const& get_mesh() const;

    is::IAnimatedMeshSceneNode* const& get_objet() const;


private:
    /** position of decoration **/
    ic::vector3df objectPostion;
    /** rotation of decoration **/
    ic::vector3df objectRotation;
    /** scale of decoration **/
    ic::vector3df objectScale;
    /** type of decoration **/
    type objectType;
    /** mesh of decoration **/
    is::IAnimatedMesh *meshObject;
    /** object of decoration **/
    is::IAnimatedMeshSceneNode *nodeObject;

};

#endif // OBJET_HPP

