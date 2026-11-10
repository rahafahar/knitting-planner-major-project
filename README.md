
classDiagram

    class Timer{
        -time : double
        -duration1 : double
        -duration2 : double
        -duration3 : double
        +start() void
        +stop() void
        
    }

    class Fit {
        -rows : int
        -width : int
        -sleeveRows : int
        +draw() void
        
    }
   
   class Yarn {
        -needleSize : double
        -yarnWidth : double
        -material : string_ptr_array
        -size : int
        +getMaterial() void
        +setMaterial(n : string) string
        +getNeedleSize() void
        +setNeedleSize(needle : double) double
        +getYarnWidth() void
        +setYarnWidth(yarnW : double) double
        

   }
   

    class Planner {
        -days : double
        -weeks : double
        -calculate(t : Timer) void
        +getPlan(x : double) void
        +setPlan(p : Planner) string
    }


Planner --o Timer
Planner --> Yarn
Fit --> Yarn
