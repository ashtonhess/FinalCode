//
// Created by Ashton Hess on 5/5/22.
//

#include "CharacterCreator.h"

Character* CharacterCreator::generateVowelCharacter(){
    return new VowelCharacter();
}
Character* CharacterCreator::generateConsonantCharacter(){
    return new ConsonantCharacter();
}
Character* CharacterCreator::generateNumberCharacter(){
    return new NumberCharacter();
}

//Shape*ShapeFactory::getShape(enum ShapeType::shapeType type, int centerX, int centerY, double sideLength){
//    if(type == ShapeType::SQUARE){
//        return new Square(centerX,centerY,sideLength);
//    }
//    else if(type == ShapeType::PENTAGON){
//        return new Pentagon(centerX,centerY,sideLength);
//    }
//    else if(type == ShapeType::HEXAGON){
//        return new Hexagon(centerX,centerY,sideLength);
//    }
//    else {
//        throw std::exception();
//    }
//}