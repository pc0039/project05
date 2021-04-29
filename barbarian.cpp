#include "barbarian.hpp"

Barbarian::Barbarian(JsonEntityBuilder &builder, JsonItemBuilder & inventory, uint32_t uid) : 
    Entity(builder, inventory, uid)
{
    std::cout << Name() << " the barbarian had entered the battle" << std::endl;
}




void Barbarian::Rage(Entity* target)
{
    Attack(target, GetStrength(), "Rage");
}

void Barbarian::Flurry(Entity* target)
{
    Attack(target, GetStrength()*0.5, "Flurry");
    Attack(target, GetStrength()*0.5, "Flurry");
}

void Barbarian::OutputStatus() const
{
    std::cout << Class() << ": " << this->Name()
                << "\n\tCurrent HP: " << this->CurrentHP()
                << "\n\tStrength: " << this->GetStrength()
                << std::endl;

    PrintInventory();
}

void Barbarian::WeaponAttack(Entity * target)
{
    Attack(target, 4.0, "Shield Attack");
}

void Barbarian::UseAction(Entity * target, const std::string& spellName, const std::string & args)
{
    if(spellName == "rage")
    {
        Rage(target);
        return;
    }

    if (spellName == "flurry")
    {
        Flurry(target);
        return;
    }

    if(spellName == "weapon_attack")
    {
        WeaponAttack(target);
        return;
    }

    errorFindingAbility(spellName);
}