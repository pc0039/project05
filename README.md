# Project05_test
4) creating a new hero class 
Adding a new class, like implementing classes in project 1, there would need to be new "class".hpp and "class".cpp files. The "class".hpp file inherits "JsonEntityBuilder.hpp" and "Entity.hpp"
Creating a new hero class involves unique attacks. A few ideas for a new class
-Barbarian
  An offence class, barbarians have the ability of "Rage" where they enter a range. Implementation of rage in this program is an attack that has a strength modifier higher then other attacks. Assuming that Rage is only used once in the input file. Other attacks are a generic melee attack, and an Extra Attack that hits the target twice. Inventory includes battleaxe and shield.
-Bard 
  A support class, like the priest, however instead of restoring the HP of an entity or entities in the hero's party, has an ability that can boost an entity's skill (strength, intelligence, agility, or wisdom). A melee attack and a spell as well. Weapons/inventory includes a dagger, and a lute or other instrument. Might require implementation of a new skill, charisma.
-Ranger 
  An offence class that specializes in ranged attacks. Has a specialized ranged attack that can attack twice in one turn, a generic melee attack, and a spell. Inventory includes a Bow and Arrows, a melee weapon. Ranged attack uses skill of agility.

  The class I'm most likely going to implement is Barbarian, which doesn't require creating a new skill or using multiple skills.