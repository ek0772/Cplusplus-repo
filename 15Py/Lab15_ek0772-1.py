"""
i. Lab15_ek0772-1
ii. Elijah K
iii. A program to plot triangles on a custom graph
iv. Starter code not used. All code is inspired by oreilly python crash course 3rd edition textbook.
v. 5/5/2026



"""
import matplotlib.pyplot as plt

xcoord=1
ycoord=xcoord*9
slope=6
line1_input_values = [1,2,3,4,5]
line2_input_values = [5,6,7,8,9]
line1_yval = [1,9,18,27,36]
line2_yval = [36,27,18,9,1]


line3_input_values=[1,2,3,4,5,6,7,8,9,]
line3_yval=[1,1,1,1,1,1,1,1,1]


"""Sub-triangle with calculations"""
tri_left_x =[3,4,5]
tri_left_y = []

for x in tri_left_x:
    tri_left_y.append((x*slope)-8)




tri_right_x = [5,6,7]
tri_right_y = []

for x in tri_right_x:
    tri_right_y.append(x*slope*(-1)+52)


tri_bottom_x=[3,4,5,6,7]
tri_bottom_y=[10,10,10,10,10]

"""Print handmade triangle"""

fig, ax = plt.subplots()
ax.plot(line1_input_values, line1_yval, linewidth=3, color ="green")
ax.plot(line2_input_values, line2_yval, linewidth=3, color ="green")
ax.plot(line3_input_values, line3_yval, linewidth=3, color = "green")

"""Print calculated triangle"""

ax.plot(tri_left_x, tri_left_y, linewidth=3, color ="black")
ax.plot(tri_right_x, tri_right_y, linewidth=3, color ="black")
ax.plot(tri_bottom_x,tri_bottom_y,linewidth=3, color ="black")

"""Create grid lines"""
plt.grid(True, color ="green", linewidth =5)

"""Set chart title and lable axis"""
ax.set_title("Triangle",fontsize=24)
ax.set_xlabel("X-Coordinate", fontsize=14)
ax.set_ylabel("Y-Coordinate", fontsize=14)

ax.tick_params(labelsize=14)

plt.show()

plt.savefig('Triangle.png', bbox_inches='tight')