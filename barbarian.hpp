#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP

#include "JsonEntityBuilder.hpp"
#include "entity.hpp"


class Barbarian : public Entity
{
private: 

    void Rage(Entity* target);
    void Flurry(Entity* target);
    
public:
    Barbarian(JsonEntityBuilder &builder, JsonItemBuilder & inventory, uint32_t uid);
    virtual void OutputStatus() const override;
    virtual void WeaponAttack(Entity * target) override;

    virtual void UseAction(Entity * target, const std::string& spellName, const std::string & args) override;
};

#endif // BARBARIAN_HPP