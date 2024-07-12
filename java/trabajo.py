import turtle

window = turtle.Screen()
window.bgcolor("white")

t = turtle.Turtle()
t.speed(1)

t.fillcolor("red")
t.begin_fill()
t.left(45)
t.forward(100)
t.circle(50,180)
t.right(90)
t.circle(50,180)
t.forward(100)
t.end_fill()

t.penup()
t.goto(0,-100)
t.pendown()

turtle.done()