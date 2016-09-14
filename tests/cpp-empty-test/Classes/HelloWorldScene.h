#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include <vector>

#include "ui/UIListView.h"

class HelloWorld : public cocos2d::Layer
{
public:
    static cocos2d::Scene* scene();
    
    virtual bool init() override;
    void gameSettingMenuSelectedItemEvent(cocos2d::Ref* sender, cocos2d::ui::ListView::EventType type);
    void secondMenuSelectedItemEvent(cocos2d::Ref* sender, cocos2d::ui::ListView::EventType type);
    void resourceRequirementMenuSelectedItemEvent(cocos2d::Ref* sender, cocos2d::ui::ListView::EventType type);
    void fpsSelectedMenuSelectedItemEvent(cocos2d::Ref* sender, cocos2d::ui::ListView::EventType type);

    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
    
private:
    cocos2d::ui::ListView* createListView(const std::vector<std::string>& itemTitles, const cocos2d::Vec2& position);
    
    cocos2d::ui::ListView* _secondMenu;
    cocos2d::ui::ListView* _thirdMenu;
};

#endif // __HELLOWORLD_SCENE_H__
