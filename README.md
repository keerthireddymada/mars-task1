# MaRS Task-1

This repository contains my solutions to the Task-1 problems, divided into three levels:

- 2 Easy questions
- 5 Medium questions
- 2 Hard questions

Each problem includes my learning experience, approach, and any resources I used.

---

##  Easy Dose (2 Questions)

### 1. [Linux commands inside Bash script]  

- **My Learning Experience**:  
  In Ubuntu, I learnt how to open the text editor using nano where I can write the commands of the bash script and get it. I also forgot the linux commands that were taught to me earlier, so this question helped me get familiar again with the linux commands and I also learnt some new commands.
- **Challenges Faced**:  
  I actually thought of writing the rover_mission directory process (mkdir and cd) inside the bash script. I made an actual rover_mission directory in my computer and then made the bash script inside that directory, so I didnt write the making directory commands inside the bash script.
  It also took longer for the shutdown in 10 minutes command. I thought that commands dont run inside the text editor, but it took me long when I understood that command would actually run. So, later I just commented that command.
  Also since its the first question which I had to upload in GitHub, it asked me for the personal access token which I had to give in the ubuntu terminal and that again took time.
- **My Approach**:  
  I saw the link given in the document and also referred my notes about these linux commands which i wrote during the starting of my first semester. Then I learnt about these nano, chmod commands. Then i continued writing the 
- **Resources Used**:  
  <https://www.youtube.com/watch?v=ak8c9SfHGWI>
  

---

### 2. [Bash Scripting]  

- **My Learning Experience**:
  I understood the commands of the bash scripting , it was more like C but I had to do more research to meet the needs of the question which were not provided in the resources.
- **Challenges Faced**:
  I did not understand how to get a random value between 1 to 100, like what code to write, so I had to search longer for that. And I also realised late that in this, the spacing in the commands is very important unlike c as it gets confused variables to commands.
  So for a very long time, my script didnt run until i adjusted the spacing.
- **My Approach**:
  I Learnt some things from the previous question but the bash commands, i had to learn in this. I searched for the commands that are required to the ones present in the link given but I couldnt find many. So, for those required commands, I saw youtube videos.
- **Resources Used**:
  <https://www.youtube.com/watch?v=3Ew6P5MUqAE>
  <https://www.youtube.com/watch?v=DOVsoWJAxuM>

---

## Medium Dose (5 Questions)

### 1. [Marker Question]  

- **My Learning Experience**:
  It took time for me to actually visualize what was happening, 
- **Challenges Faced**:  I got confused with the 55cm information but then I got clarity after asking a friend. Also the distance between the rover and camera or the coordinates of them werent given so I used assumptions.
- **My Approach**:
  I started by drawing diagram, then putting the markers, Then I realised that we need to take reference as the rover's centre. Then we subtract the distance between the camera and the centre and then move one coordinate by 55 and calculate distances.
- **Resources Used**:
  Did not use any resources.

### 2. [Morse code Question]  

- **My Learning Experience**:
  I heard this word morse code in many sci-fi movies but I never really knew what it was until I solved this question. But I still cant remember which letter corresponds to which morse code which the leads do remember in the movies. This question was more like decoding and I liked it.
- **Equations, Theorems, Sketches**:
  strcmp(oneletter, Morse[j]) == 0
  char Morse[26][5] = {
        ".-",   "-...", "-.-.", "-..",  ".",    "..-.", "--.",  "....", 
        "..",   ".---", "-.-",  ".-..", "--",   "-.",   "---",  ".--.",
        "--.-", ".-.",  "...",  "-",    "..-",  "...-", ".--",  "-..-", 
        "-.--", "--.."
    };
- **Challenges Faced**: When I tried running, I got so many errors about the space gaps, new line character, letter ends, slashes(word ends). So I had to specifically mention these conditions in my if else blocks. But I didnt realise at the beginning that the errors were coming because I didnt specify those properly.
- **My Approach**:
  After taking input, it compares the morse code in the if block and if it is still a . or -, it will move forward else if it is a gap,slash,newline, it will stop and convert the morse code to get a single letter and it repeats. this we compare with the morse chart and add that letter to our decoded array.
- **Resources Used**:
  I had to take the whole morse code online. Like which letter corresponds to what symbols.

### 3. [Encrypted message Question] 

 - **My Learning Experience**:
   I felt this question very easy among all the questions which were there. I just found patterns like how we do in reasoning.
 - **Equations, Theorems, Sketches**: 
  output[i] = input[i] - (i+1);  
 - **My Approach**:
   I wrote a function which would convert any lowercase to uppercase and then in the main, we will remove the (index+1) from the left of the word from the ascii value of the given letter to get the ascii value of the required one, then we print it.
 
---
### 4. [Filters Question] 

 - **My Learning Experience**:
   I learnt various methods and how the usage of different filters matters with the data provided to get the required answer. Also I learnt basic file handling which was required in this question
 - **Equations, Theorems, Sketches**:
   if(abs(readings[i]-readings[i+1]) > 4)
 - **Challenges Faced**: I didnt understand when the hybrid will come into play and also how the code would be written if we opt for hybrid
 - **My Approach**: I made two functions for both finding average and median, then i divided the data into windows and made a condition where in if the differences between the adjacent values is greater than 4, then we would use sanchiko(median) else if the differences are smooth, then we would use muchiko(average)
 - **Resources Used**:
   <https://www.youtube.com/watch?v=MQIF-WMUOL8>
   
---
### 5. [Quaternion  Question] 
t
 - **My Learning Experience**: I had no idea of what a quaternion is, so i got to learn what it is to some extent. I do not have very clear idea of the math involved in it.
 - **Equations, Theorems, Sketches**:
    float cosp = cos(p/2);
    float sinp = sin(p/2);
    float cosya = cos(ya/2);
    float sinya = sin(ya/2);
    float cosr = cos(r/2);
    float sinr = sin(r/2);

   float w = cosp * cosya * cosr + sinp * sinya * sinr;
    float z = cosp * cosya * sinr - sinp * sinya * cosr;
    float x = sinp * cosya * cosr - cosp * sinya * sinr;
    float y = cosp * sinya * cosr + sinp * cosya * sinr;
 - **Challenges Faced**: I couldnt understand how these formulas arrived.
 - **My Approach**: I just took the formulas online and learnt how to do the conversion and just did it in my code.
 - **Resources Used**:
   <https://math.stackexchange.com/questions/893984/conversion-of-rotation-matrix-to-quaternion>
   <https://www.youtube.com/watch?v=zjMuIxRvygQ>
---

---

## Hard Dose (2 Questions)

### 1. [Arena Question]  

- **My Learning Experience**:  I felt the question moderate but writing the code was very lengthy.
- **Challenges Faced**:  I couldnt solve the shortest distance bonus question.
- **My Approach**:  I found the coordinates of the obstacles first and then found the max coordinates that I would get for the arena matrix size, then i found the centre in the arena matrix and marked the obstacles with respect to origin in that matrix. 

---

### 2. [Behavior Tree Question]  


- **My Learning Experience**:  I learnt how behavior trees work but I'm not sure if my answer is correct. 
- **Challenges Faced**:  Not big challenges, but it took time for me to understand what exactly a behavior tree is and how it works.
- **My Approach**:  I saw various youtube videos which were basic and were connected to what is asked and not very deep. Then, I saw few behaviour trees examples and tried solving the question asked.
- **Resources Used**:  
<https://www.youtube.com/watch?v=kRp3eA09JkM>
---
Thank you!!

