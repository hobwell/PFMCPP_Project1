#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: person
//  action 1: the person sleeps
person.sleep();
//  action 2: the person eats
person.eat();
//  action 3: the person calls their mother
person.callMom();

//  2) 
//  Noun: automatic door
//  action 1: the automatic door waits until it detects a person
automaticDoor.detectPerson();
//  action 2: the automatic door opens
automaticDoor.open();
//  action 3: the automatic door closes
automaticDoor.close();

//  3)
//  Noun: cat
//  action 1: the cat meows
cat.meow();
//  action 2: the cat hisses
cat.hiss();
//  action 3: grooms itself
cat.groomSelf();

//  4)
//  Noun: bread maker
//  action 1: the bread maker waits for ingredients
breadMaker.waitForIngredients();
//  action 2: mixes ingredients into dough
breadMaker.mixIngredients();
//  action 3: cooks dough into bread
breakMaker.cookDough();

//  5)
//  Noun: star
//  action 1: a star emits light
star.emitLight();
//  action 2: a star expands
star.expand();
//  action 3: a star collapses
earch.collapse();

//  6) 
//  Noun: cell
//  action 1: a cell divides
cell.divide();
//  action 2: a cell consumes energy
cell.consumeEnergy();
//  action 3: a cell dies
cell.die();

//  7)
//  Noun: tree
//  action 1: a tree grows leaves
tree.growLeaf();
//  action 2: a tree sheds leaves
tree.shedLeaf();
//  action 3: a tree grows fruit
tree.growFruit();

//  8)
//  Noun: answering machine
//  action 1: an answering machine waits for calls
answeringMachine.waitForCall();
//  action 2: an answering machine records messages
answeringMachine.recordMessage();
//  action 3: an answering machine plays back recorded messages
answeringMachine.playRecordedMessage();

//  9)
//  Noun: snow
//  action 1: snow falls
snopw.fall();
//  action 2: snow accumulates
snow.accumulate();
//  action 3: snow melts
snow.melt();

//  10) 
//  Noun: programmer
//  action 1: programmers write code
programmer.writeCode();
//  action 2: programmers break stuff
programmer.breakStuff();
//  action 3: a programmers innovate
programmer.innovate()



#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
