//
//  block.hpp
//  whiteBlock
//
//  Created by ww on 16/11/6.
//
//

#ifndef block_hpp
#define block_hpp

#include <stdio.h>
#include <cocos2d.h>

USING_NS_CC;

class Block:public Sprite
{
public:
    Block* init(Size size, Color3B color, std::string text);
};

#endif
