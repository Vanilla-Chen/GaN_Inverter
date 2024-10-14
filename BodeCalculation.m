clc
clear

%% LR Calcu
% w1  = 2*pi*1e3;               %基波角频率
% Uo_ = 50*0.707;          %电容电压基波有效值
% wl  = 2*pi*50e3;              %LC谐振角频率
% Io_ = 1*0.707;           %电感电流基波有效值

w1  = 2*pi*1e3;               %基波角频率
Uo_ = 50*0.707;          %电容电压基波有效值
wl  = 2*pi*50e3;              %LC谐振角频率
Io_ = 1*0.707;           %电感电流基波有效值

L = sqrt(((w1*(Uo_*Uo_)/(wl*wl)) + (w1*w1*w1*(Uo_*Uo_)/(wl*wl*wl*wl))) / (w1*(Io_*Io_)))
C = 1/(wl*wl*L)

Q = Uo_/Io_*sqrt(C/L)
% L   = 10e-6;
R_L = 0.01;
% C   = 1e-6;

Rdc= 50;

% s=tf('s');
% 
% G_L = 1/(L*s+R_L);
% G_C = 1/(C*s+1/Rdc);
% % G_LC_cl = (G_L*G_C)/(1+G_L*G_C);
% 
% kpi=25.036;%79.7386;
% kii=0;
% % % Gi=1/(L*s+R_L);
% G_pi=kpi+kii/s;
% G_op=G_pi*G_L;
% % G_op=(kpi+kii/s)/(L*s+R_L);
% % G_cl=G_op/(1+G_op);
% % G_op=G_pi*G_L;
% G_cl=G_op/(1+G_op);
% 
% % kpu=3.91;
% % kiu=3655;
% % % Go=Rdc/(1+C1*Rdc*s);
% % Go=1/(C*s);
% % Gu_op=(kpu+kiu/s)*G_cl*Go*0.75;
% % Gu_cl=Gu_op/(1+Gu_op);
% 
% 
% %% Bode
% P=bodeoptions;
% % P.FreqScale = 'linear';
% P.XLim={[1e-2 1e7]};
% P.FreqUnits='Hz';
% P.Grid='on';
% % bode(Gi,Gi_pi,Gi_op,P);
% bode(G_op,G_cl,P);
% hold on




