clc
clear

L   = 10e-6;
R_L = 0.01;
C   = 1e-6;

Rdc= 1;

s=tf('s');

G_L = 1/(L*s+R_L);
kpi=1;%79.7386;
kii=0;
% s=tf('s');
% Gi=1/(L*s+R_L);
G_pi=kpi+kii/s;
% G_op=(kpi+kii/s)/(L*s+R_L);
% G_cl=G_op/(1+G_op);
G_op=G_pi*G_L;
G_cl=G_op/(1+G_op);

% kpu=3.91;
% kiu=3655;
% % Go=Rdc/(1+C1*Rdc*s);
% Go=1/(C*s);
% Gu_op=(kpu+kiu/s)*G_cl*Go*0.75;
% Gu_cl=Gu_op/(1+Gu_op);


%% Bode
P=bodeoptions;
% P.FreqScale = 'linear';
P.XLim={[10 1e7]};
P.FreqUnits='Hz';
P.Grid='on';
% bode(Gi,Gi_pi,Gi_op,P);
bode(G_op,G_cl);