Scenario: You are recently hired for a delivery company in the most chaotic city called Namaste-Land, where the packages are wild, and the routes are even wilder. Your mission as a delivery man, should you choose to accept it, involves sorting through a mountain of packages. Each box has an urgency level - from "I need this yesterday" (1) to "Eh, whenever's fine" (5) - and a weight that's either "feather-light" or "what did they pack, an elephant?". But wait, there's more! With each delivery, you're playing a real-time game of A* or dijkstra path planning, dodging "dynamic obstacles" - think of them as surprise road closures or pop-up parades or people.So, what can Brown do for you? DO YOUR JOB! or get deported.

Global Challenge Description: **You can use any programming language you want.**

Local Challenge Description: *\<During Live Demo>*
1) The number of packages can vary from 1-20, urgency (1-5) and weight(1-10)
2) Package and Route Description will be formatted like below
3) The route will vary from each challenger during Demo
4) During presentation one variable will be changed either a new package or route is added,removed or changed




cpp

EXAMPLE QUESTION

**Package List**
[
{
"id" : "PKG001",
"urgency" : 3,
"weight" : 10,
"description" : "An Elephant"
},
{
"id" : "PKG002",
"urgency" : 5,
"weight" : 2,
"description" : "A Tiny Elephant"
},
{
"id" : "PKG003",
"urgency" : 1,
"weight" : 7,
"description" : "Child Labourers"
},
{
"id" : "PKG004",
"urgency" : 2,
"weight" : 4,
"description" : "Drinking Water"
},
{
"id" : "PKG005",
"urgency" : 2,
"weight" : 6,
"description" : "Chinese Propoganda Books"
}
]


**Travel Route**

   0 1 2 3 4 5 6 7 8 9
 0[S,.,.,X,.,.,.,.,.,.],
 1[.,X,.,X,.,X,.,.,.,.],
 2[.,.,.,.,.,.,.,X,.,.],
 3[.,.,.,.,.,.,.,.,.,.],
 4[X,X,.,X,.,X,.,X,.,.],
 5[.,.,.,.,.,.,.,.,.,.],
 6[X,X,X,X,X,.,.,.,.,.],
 7[.,.,.,.,.,.,.,.,.,.],
 8[.,E,.,.,.,X,X,X,X,X],
 9[.,.,.,.,.,.,.,.,.,.],


S - Represents the start point, where packages are sorted and trucks begin their route
E - Represents the end point, where all packages must be delivered within the warehouse
.(dot) - Represents open space where the truck can move freely
X - Represents obstacles, Random brown or yellow people



Submission Guideline
1) Implement each functions within proper comments, explaining you approach, especially for the more complex algorithm
2) Discuss trade-offs or optimization you made in you implementation
3) Provide the time duration to complete each task and the overall challenge
4) Write a Documentation in Markdown Format 
5) Present your solution to Software Members *(Live Demo) Required*
6) Deadline is on *18/1/2025 2pm*