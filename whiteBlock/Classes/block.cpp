//
//  block.cpp
//  whiteBlock
//
//  Created by ww on 16/11/6.
//
//

#include "block.hpp"

Block* Block::init(Size size, Color3B color, std::string text)
{
    auto b = new Block();
    b->autorelease();
    
    Sprite::init();
    
    this->setContentSize(size);
    this->setAnchorPoint(Vec2(0,0));
    this->setTextureRect(Rect(0,0,size.width, size.height));
    this->setColor(color);

    auto l = Label::create();
    l->setString(text);
    l->setSystemFontSize(50);
    l->setTextColor(Color4B::BLACK);
    l->setPosition(size.width/2, size.height/2);
    addChild(l);
    
    return b;
}
