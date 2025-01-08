#include "PreCompiledHeader.h"
#include "Level.h"
// 프로젝트 설정 -> 추가 포함 디렉토리에 $(ProjectDir)\ 추가
//#include "../Actor/Actor.h"
#include "Actor/Actor.h"

#include <iostream>

Level::Level()
{
}

Level::~Level()
{
	// 메모리 해제.
	//for (int ix = 0; ix < actors.Size(); ++ix)
	//{
	//	// 액터 삭제.
	//	delete actors[ix];
	//}

    // 메모리 해제.
    for (Actor* actor : actors)
    {
        delete actor;
    }
}

void Level::AddActor(Actor* newActor)
{
    actors.PushBack(newActor);
}

void Level::Update(float deltaTime)
{
    // 레벨에 포함된 액터를 순회하면서 Update 함수 호출.
    //for (int ix = 0; ix < actors.Size(); ++ix)
    //{
    //    actors[ix]->Update(deltaTime);
    //}

    for (Actor* actor : actors)
    {
        actor->Update(deltaTime);
    }
}

void Level::Draw()
{
    // 레벨에 포함된 액터를 순회하면서 Draw 함수 호출.
    //for (int ix = 0; ix < actors.Size(); ++ix)
    //{
    //    actors[ix]->Draw();
    //}
    
    for (Actor* actor : actors)
    {
        actor->Draw();
    }
}
