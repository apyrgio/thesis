thesis
======
* [About](#about)
* [Why?](#why)
* [Fonts](#fonts)
* [Required packages](#required-packages)
* [How-to](#how-to)
* [Copyright](#copyright)

# About #

This my diploma thesis that will be submitted in September of this year (2013)
to fulfil the requirements for the Degree of Master(?) of Engineering in the
School of Electrical and Computer Engineering of National Technical University
of Athens.

# Why? #

Well, having recently finished the implementation I was working on, the natural
progression of things was to learn LaTeX. [The Not So Short
Introduction to LATEX 2ε](http://tobi.oetiker.ch/lshort/lshort.pdf) was a great
reference point to start with so having read that, I downloaded the .tex
template of N.T.U.A. to begin writing. It was... dissapointing to say the
least.

After many e-mail exchanges with my fellow students, I came across some really
interesting templates which was a shame to be passed only from hand to hand and
not be uploaded somewhere. Well, my "somewhere" is here.

So, if you happen to stumble upon this repo, feel free to use my thesis as a
template for your own. Additionally, you may find some templates in the
`template` folder that you may want to use or check out.

# Fonts #

# Required packages #

# How-to #

Provided you have installed LaTeX as well as the `latexmk` tool, you can do:

```
make
```

and a `thesis.pdf` file will be created.

If you want to remove the helper files, you can do:

```
make clean
```

while if you want to clean all produced files (the .pdf file too) you can do:

```
make distclean
```

The above also applies to the Beamer theme that has been cloned from the
[Association-Atilla repo](https://github.com/Association-Atilla/atilla-beamer)

# Copyright #

You can say it's GPL v2/3 in the sense that if you find anything useful and
use it for your own thesis, *you should probably* open up your bag of tricks too
and allow fellow students to benefit from what you've learned.



keywords: thesis, NTUA, διπλωματική, ΕΜΠ, latex, xetex, xelatex


