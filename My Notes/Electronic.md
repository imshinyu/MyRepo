# Program:
### Chapter 1: Electrostatics
### Chapter 2: Conductors & Capacitors
### Chapter 3: Electro kinetics
# Info:
vector=شعاع
# REVISION CONTROL:
## Champ Electrostatics :
$$
\vec{E}=k* \frac{q_A}{AB^2}*\vec{u}_{\substack{A  B}}
$$
## Force :
$$
\vec{F}_{\substack{A  B}}=k*\frac{q_A*q_B}{AB^2}*\vec{u}_{\substack{A  B}}
$$
## Potential :
$$
V=k*\frac{q_A}{q_B}
$$
## Principe de superposition :
$$
\vec{F}(O)=\vec{F}_{\substack{AO}}+\vec{F}_{\substack{BO}}+\vec{F}_{\substack{CO}}
$$
$$
\vec{F}(O)=\vec{F}_1+\vec{F}_2+\vec{F}_3
$$
$$
\vec{F}(O)=\sum^{n}_{i=1}\vec{F}_i
$$
$$
\vec{E}(O)=\sum^{n}_{i=1}\vec{E}_i
$$
$$
V(O)=\sum^{n}_{i=1}V_i
$$
## Distribution des charges lineiques :
$$
\lambda=\frac{Q}{l} \rightarrow Q=\frac{l}{\lambda}
$$
$$
dq=\lambda dl
$$
$$
d\vec{E}(B)=k*\frac{\lambda l}{AB^2}*\vec{u}_{\substack{AB}}
$$
$$
\vec{E}(B)=\int d\vec{E}(B)=\int k*\frac{\lambda dl}{AB^2}
$$
## Distribution des charges surfecique :
$$
\sigma=\frac{dq}{dS} \rightarrow dq=\sigma * ds
$$
$$
S=\int\int dS
$$
$$
d\vec{E}(B)=k*\frac{dq}{r^2}*\vec{u} \space with\space r \space being \space Length 
$$
$$
\vec{E}=\int \int k*\frac{\sigma*ds}{r^2}*\vec{u}
$$
## Distribution des charges volumetirque :
$$
ρ=\frac{dQ}{dV}​
$$
$$
Q=\int \int \int ρdV
$$
# **TD1**
M(x,y,z)
$$
\overrightarrow{OM}=x\overrightarrow{i}+y\overrightarrow{j}+z\overrightarrow{k}
$$
### element deplacement:
$$
\vec{dl}=dx\vec{i}+dy\vec{j}+dz\vec{k}
$$
### element surface :
$$
in \space (OX,OY): \vec{dS}=dxdy\vec{k}
$$
$$
in \space (OX,OZ): \vec{dS}=dxdz\vec{j}
$$
$$
in \space(OY,OZ)\vec{dS}=dydyz\vec{i}
$$
### element volume :
$$
dV=dx*dy*dz
$$
## Operators:

## OPERATOR nabla :
$$
\vec{\nabla}=\dfrac{\partial}{\partial x}\vec{i}+\dfrac{\partial}{\partial y}\vec{j}+\dfrac{\partial}{\partial z}\vec{k}
$$
**Notice** : derivative vector => result vector
## OPERATOR gradient :
$$
\vec{grad}f(x,y,z)=\vec{\nabla}f(x,y,z)=\dfrac{\partial f(x,y,z)}{\partial x}\vec{i}+\dfrac{\partial f(x,y,z)}{\partial y}\vec{j}+\dfrac{\partial f(x,y,z)}{\partial z}\vec{k}
$$
**Notice** : derivative function => result vector
## OPERATOR divergence :
$$
div(\vec{u})=\vec{\nabla}.\vec{u}=\dfrac{\partial u_x}{\partial x}+\dfrac{\partial u_y}{\partial y}+\dfrac{\partial u_z}{\partial z}
$$
**Notice** : derivative vector => result function
