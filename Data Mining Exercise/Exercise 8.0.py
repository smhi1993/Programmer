#Program that gets a string and returns the repeat count of a word in it.
def wordcount(a = '' , b = ''):
    if len(a) == 0:
        a = input('Enter a string:\n')
        a = str(a)
    elif len(b) == 0:
        b = input('Enter a string you want to know its repeat time:\n')
        b = str(b)
    elif len(a) & len(b) == 0:
        a = input('Enter a string:\n')
        a = str(a)
        b = input('Enter a string you want to know its repeat time:\n')
        b = str(b)
    print('The word {} has repeated {} times in the string.'.format(b , a.count(b)))

if __name__ == '__main__':
    a = '''
Review

"Satisfiability solving is one of the most important computer technology advances in the last two decades. Now, with the
 help of it, we can find solutions for unbelievably large (say 2^1000000) combinations. Donald Knuth's new volume 
 explains the theories, algorithms, and applications of satisfiability solving, together with his famous search 
 algorithm, Dancing Links.

"If you have a difficult combinatorial problem and want to solve it with a computer, read this book! Not only your needs
 but also your intellectual curiosity will be fully satisfied."

―Naoyuki Tamura, Kobe University

"Donald Knuth may very well be a great master of the analysis of algorithms, but more than that, he is an incredible and
 tireless storyteller who always strikes the perfect balance between theory, practice, and fun.

"This new volume of TAOCP dives deep into the fascinating exploration of search spaces (which is quite like looking for 
a needle in a haystack or, even harder, to prove the absence of a needle in a haystack), where actions performed while 
moving forward must be meticulously undone when backtracking. It introduces us to the beauty of dancing links for 
removing and restoring the cells of a matrix in a dance which is both simple to implement and very efficient. And it 
studies the iconic and versatile satisfiability problem and carefully analyses various ingredients of SAT solvers."

―Christine Solnon, Department of Computer Science, INSA Lyon

"Donald Knuth's latest volume of The Art of Computer Programming continues his treatment of combinatorial searching. As 
in previous volumes, he presents his material clearly and precisely, in logical sequence, with plenty of helpful 
examples and instructive problems to help the reader understand. Any programmer whose work involves recursive searching,
 combinatorial satisfaction, or optimization is likely to gain much of value from this book.

"To help illustrate the use of search techniques, Knuth covers, in great variety, problems involving polyominoes, 
polycubes (including Soma), and other polyforms. He also tackles tiling and dissection problems, matching problems, 
chessboard problems, sudoku puzzles, and various commercial puzzles like KenKen® and Hidato®. These problems are 
analyzed carefully and rigorously, with many detailed diagrams.

"I was amazed and delighted by this material. I think that any fan of recreational mathematics and puzzles will be too."

―George Sicherman, Red Bank, New Jersey

"Knuth's latest volume (4B) contains, as the previous ones, a huge amount of material on the analysis of algorithms, of 
interest to both mathematicians and computer scientists; the new volume focusses on algorithms related to backtracking. 
An important feature in all volumes is the large number of exercises, most of them with detailed solutions, but some are
 unsolved research problems; I have based some of my own research on open problems from Knuth's books, and I look 
 forward to trying to do so with problems in the new volume."

―Professor Svante Janson, Department of Mathematics, Uppsala University

"I taught an undergraduate combinatorics course and a graduate probability course out of earlier versions of Volume 4B. 
The students loved it and so did I. It's FULL of new stuff AND it's full of (illuminated) old stuff that nobody knows 
anymore. Just great."

―Persi Diaconis, professor of mathematics and statistics, Stanford University

"Many important applications in computer science from optimization to verification can be phrased as combinatorial 
search problems, and much of this book is focused on solving Boolean satisfiability (SAT) encodings of such problems. 
The volume is unique in the way it provides a consistent introduction and account of the technical history of practical 
SAT solving which led to the 'SAT Revolution' we are witnessing today where the encoding of a problem into SAT is 
considered a practical solution. Following the unique style of TAOCP the author continues to explore a vast number of 
fascinating forgotten paths and opens intriguing new ones, often formulated as exercises, which actually with some of 
their solutions should be considered the real treasures of this volume. Some of these exercises have already led to new 
results published in scientific paper and are also a great source for seminars and teaching SAT in general."

―Armin Biere, University of Freiburg, Germany

"On a casual browse, the exercises in TAOCP leave most of all an impression of playfulness. Once you begin to dig 
deeper, though, you are overcome with respect for Knuth's uncanny knack for asking the right questions―for uncovering 
surprising but fruitful directions of research. While the breadth and depth of his work have been praised extensively, 
this aspect of it has perhaps gone underappreciated. Nearly every exercise in TAOCP is a door; Knuth has pushed it ajar 
for you, and now you are invited to step through and explore."

―Nikolai Beluhov, Bulgaria

"Professor Donald E. Knuth has always loved to solve problems. In Volume 4B he now promotes two brand new and practical 
general problem solvers, namely (0) the Dancing Links Backtracking and (1) the SAT Solver. To use them, a problem is 
defined declaratively (0) as a set of options, or (1) in Boolean formulae. Today’s laptop computers, heavily armoured 
with very high speed processors and ultra large amounts of memory, are able to run either solver for problems having big
 input data. Each section of Volume 4B contains multitudinous number of tough exercises which help make understanding 
 surer. Happy reading!"

―Eiiti Wada, an elder computer scientist, UTokyo

"Knuth explains with great clarity the essential SAT techniques to a broad audience and shows their effectiveness on 
fascinating problems. His thought-provoking questions drive deeper understanding and new research in the area."

―Marijn Heule, Carnegie Mellon University

"For a generation, The Art of Computer Programming has been a goldmine of learning opportunities for students, 
mathematicians, and algorithm scientists in pursuit of efficient means of solving practical computational problems 
as well as insights into the nature of computation. This volume gets to the heart of the matter: satisfiability. Whether
 or not one believes that P=NP, the pursuit of useful algorithms to address NP-complete problems that arise in 
 scientific applications is worthwhile, and this book is the place to start."

―Robert Sedgewick, William O. Baker *39 Professor of Computer Science, Emeritus, Princeton University
About the Author

Donald E. Knuth is known throughout the world for his pioneering work on algorithms and programming techniques, for his 
invention of the TEX and METAFONT systems for computer typesetting, and for his prolific and influential writing 
(26 books, 161 papers). Professor Emeritus of The Art of Computer Programming at Stanford University, he currently 
devotes full time to the completion of his seminal multivolume series on classical computer science, begun in 1962 when 
he was a graduate student at California Institute of Technology. Professor Knuth is the recipient of numerous awards and
 honors, including the ACM Turing Award, the Medal of Science presented by President Carter, the AMS Steele Prize for 
 expository writing, and, in November, 1996, the prestigious Kyoto Prize for advanced technology. He lives on the 
 Stanford campus with his wife, Jill.
'''
    b = 'solving'
    c = 'science'
    d = 'computer'
    wordcount(a , b)
    wordcount(a , c)
    wordcount(a , d)