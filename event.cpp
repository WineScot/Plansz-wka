#include "event.h"
#include "monster.h"
#include <ctime>
#include <cstdlib>

std::string Event::Event_plots[];

int Event::Num_event;

Event::Event(int x, int y, int ind)
{
    this->x=x;
    this->y=y;
    srand(time(0));
    int id=rand()%Num_event;
    plot=Event_plots[id];
    m=Monster();
}

int Event::getHp()
{
    return hp;
}

int Event::getAtt()
{
    return attack;
}

int Event::getDef()
{
    return defence;
}

Monster* Event::getM()
{
    return &m;
}

int Event::X()
{
    return x;
}

int Event::Y()
{
    return y;
}

void Event::wyswietl()
{
    std::cout<<plot<<std::endl;
    std::cout<<"Przed toba pojawia sie: "<<m.getName()<<std::endl;
    std::cout<<"Punkty zycia: "<<m.getHp()<<std::endl;
    std::cout<<"Atak: "<<m.getAtt()<<std::endl;
    std::cout<<"Obrona: "<<m.getDef()<<std::endl;
}
