# IServiceRunner Interface
 

IServiceRunner是Service的运行沙盒，用来隔离每一个Service，并控制Service的生命周期

**Namespace:**&nbsp;<a href="a8957fe6-9cc0-3a6d-cd5c-a2a246efee1e">GameBox.Framework</a><br />**Assembly:**&nbsp;ServiceCenter (in ServiceCenter.dll) Version: 1.0.0.0 (1.0.0.0)

## Syntax

**C#**<br />
``` C#
public interface IServiceRunner
```

The IServiceRunner type exposes the following members.


## Methods
&nbsp;<table><tr><th></th><th>Name</th><th>Description</th></tr><tr><td>![Public method](media/pubmethod.gif "Public method")</td><td><a href="9cbe3b1f-2f3a-33af-35be-733ced687062">GetArgs(T)</a></td><td>
获取服务参数。</td></tr><tr><td>![Public method](media/pubmethod.gif "Public method")</td><td><a href="57ad7806-dc0a-aea1-24d0-bc814312cc85">Ready</a></td><td>
当一个Service准备完毕时，需要调用这个方法通知ServiceRunner已经可以提供服务，否则其中运行的Service 永远处于等待状态。</td></tr><tr><td>![Public method](media/pubmethod.gif "Public method")</td><td><a href="7e5e4f59-7cc4-eb61-9ad2-f979c8c2a08b">Shutdown</a></td><td>
当服务需要关闭时，需要调用运行Service的ServiceRunner来终止服务。</td></tr></table>&nbsp;
<a href="#iservicerunner-interface">Back to Top</a>

## Events
&nbsp;<table><tr><th></th><th>Name</th><th>Description</th></tr><tr><td>![Public event](media/pubevent.gif "Public event")</td><td><a href="02400e62-255b-a960-7e7a-4d25c4d1a8e2">OnShutdown</a></td><td>
Service终止的事件，通过监听这个事件可以获取所有即将终止的Service的消息。</td></tr></table>&nbsp;
<a href="#iservicerunner-interface">Back to Top</a>

## See Also


#### Reference
<a href="a8957fe6-9cc0-3a6d-cd5c-a2a246efee1e">GameBox.Framework Namespace</a><br />