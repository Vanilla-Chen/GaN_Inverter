% hold on;
% 
% r   = 0.5:0.05:5;
% w1  = 2*pi*1e3;               %基波角频率
% Uo_ = 100*0.707;          %电容电压基波有效值
% wl  = 2*pi*50e3;              %LC谐振角频率
% Io_ = r*0.707;           %电感电流基波有效值
% 
% L = sqrt(((w1.*(Uo_.*Uo_)/(wl*wl)) + (w1*w1*w1.*(Uo_.*Uo_)/(wl*wl*wl*wl))) ./ (w1.*(Io_.*Io_)));
% C = 1./(wl*wl*L);
% 
% plot(r,L);
% 
% 
% 
% r   = 0.5:0.05:5;
% w1  = 2*pi*1e3;               %基波角频率
% Uo_ = 50*0.707;          %电容电压基波有效值
% wl  = 2*pi*50e3;              %LC谐振角频率
% Io_ = r*0.707;           %电感电流基波有效值
% 
% L = sqrt(((w1.*(Uo_.*Uo_)/(wl*wl)) + (w1*w1*w1.*(Uo_.*Uo_)/(wl*wl*wl*wl))) ./ (w1.*(Io_.*Io_)));
% C = 1./(wl*wl*L);
% plot(r,L);
% legend({'100','50'});




  % 主脚本  
close all; % 关闭所有之前的图形窗口（可选）  
clc; % 清除命令窗口（可选）  
  
% 定义变量  
r = 0.5:0.05:10; % 电感值的范围  
w1 = 2*pi*1e3; % 基波角频率  
wl = 2*pi*50e3; % LC谐振角频率  
  
% 定义不同的 Uo_ 值  
Uo_values = [150, 100, 75, 50, 30] * 0.707; % 电容电压基波有效值  
legend_labels = arrayfun(@(x) sprintf('%.1fV', Uo_values(x)/0.707), 1:length(Uo_values), 'UniformOutput', false); % 图例标签  
  
% 初始化图形  
figure;  
hold on;  
colors = lines(length(Uo_values)); % 获取一组颜色，用于绘制不同的曲线  
  
% 初始化存储 L 向量的单元数组  
L_vectors = cell(length(Uo_values), 1);  
R_vectors = cell(length(Uo_values), 1);  
% 对每个 Uo_ 值计算 L 并绘制曲线  
for i = 1:length(Uo_values)  
    Uo_ = Uo_values(i);  
    Io_ = r * 0.707; % 电感电流基波有效值（随 r 变化）  
    L_vectors{i} = calculate_L(r, w1, Uo_, wl, Io_) * 1e6; % 计算 L 并存储为向量（单位转换为 uH） 
    % R_vectors{i} = Uo_./Io_;
    % plot(R_vectors{i}, L_vectors{i}, 'Color', colors(i, :)); % 绘制曲线，使用指定的颜色  
    plot(r, L_vectors{i}, 'Color', colors(i, :)); % 绘制曲线，使用指定的颜色  
end  
  
% 添加图例  
legend(legend_labels);  
xlabel('电流值 r (A)');  
ylabel('计算得到的 L (uH)');  
title('L vs r for different Uo_ values');  
grid on;  
hold off;  
  




% figure;
% hold on;  
% for i = 1:length(Uo_values)  
%     Uo_ = Uo_values(i);  
%     Io_ = r * 0.707; % 电感电流基波有效值（随 r 变化）  
%     R_vectors{i} = Uo_./Io_;
%     plot(r,R_vectors{i});
% end  
% 
% % 添加图例  
% legend(legend_labels);  
% xlabel('电流值 r (A)');  
% ylabel('计算得到的负载阻值(Ω)');  
% title('R vs r for different Uo_ values');  
% grid on;  
% hold off;  

% plot(r,R_vectors);
% 此时，L_vectors 单元数组包含了每个 Uo_ 值对应的 L 向量  
% 您可以使用 L_vectors 进行进一步的分析或处理（如果需要）  
  
% 定义函数来计算 L（这里不再需要 C，因为只关心 L）  
function L = calculate_L(r, w1, Uo_, wl, Io_)  
    L = sqrt(((w1 .* (Uo_ .^ 2) / (wl * wl)) + (w1 * w1 * w1 .* (Uo_ .^ 2) / (wl * wl * wl * wl))) ./ (w1 .* (Io_ .^ 2)));  
end


