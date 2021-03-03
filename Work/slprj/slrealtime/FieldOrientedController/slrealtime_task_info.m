function [taskInfo, numtask, isDeploymentDiagram]=slrealtime_task_info()
   taskInfo(1).samplePeriod = 5.0E-5;
   taskInfo(1).sampleOffset = 0.0;
   taskInfo(1).taskPrio = 10;
   taskInfo(1).taskName = 'BaseRate';
   taskInfo(1).entryPoints = {};
   taskInfo(2).samplePeriod = 0.001;
   taskInfo(2).sampleOffset = 0.0;
   taskInfo(2).taskPrio = 9;
   taskInfo(2).taskName = ['SubRate' '1'];        
   taskInfo(2).entryPoints = {};
   numtask = 2;
   for i = 1:numtask
      if ( 0 == isnumeric(taskInfo(i).samplePeriod) )
         taskInfo(i).samplePeriod = evalin('base', taskInfo(i).samplePeriod);
      end
      if ( isempty(taskInfo(i).taskName) )
         taskInfo(i).taskName = ['AutoGen' i ];
      end
   end
   isDeploymentDiagram = 0;
end 
