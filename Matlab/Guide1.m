function varargout = Guide1(varargin)
% GUIDE1 MATLAB code for Guide1.fig
%      GUIDE1, by itself, creates a new GUIDE1 or raises the existing
%      singleton*.
%
%      H = GUIDE1 returns the handle to a new GUIDE1 or the handle to
%      the existing singleton*.
%
%      GUIDE1('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in GUIDE1.M with the given input arguments.
%
%      GUIDE1('Property','Value',...) creates a new GUIDE1 or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before Guide1_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to Guide1_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help Guide1

% Last Modified by GUIDE v2.5 04-Dec-2017 14:04:07

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @Guide1_OpeningFcn, ...
                   'gui_OutputFcn',  @Guide1_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before Guide1 is made visible.
function Guide1_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to Guide1 (see VARARGIN)

% Choose default command line output for Guide1
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes Guide1 wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = Guide1_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;





% --- Executes on button press in pushbutton1.
function pushbutton1_Callback(hObject, eventdata, handles)
a = get(handles.slider1,'Value');
p = get(handles.slider2,'Value');
L = get(handles.slider3,'Value');
x=linspace(-pi/2,pi/2,L);
y=((cos(x.*p).^0.5).*cos(a.*x)+(abs(x).^0.5)).*(4-x.^2).^0.1;
assignin('base','y',y);
axes(handles.axes1)
plot(x,y);
set(handles.text4,'String',["Wykres stworzony dla =" "" "a = " num2str(a) "" "p = " num2str(p) "" "L = " num2str(L)]);

% --- Executes on slider movement.
function slider1_Callback(hObject, eventdata, handles)
slider1 = get(hObject,'Value');
assignin('base','a',slider1);
set(handles.text1,'String',["a = ", num2str(slider1)]);


% --- Executes during object creation, after setting all properties.
function slider1_CreateFcn(hObject, eventdata, handles)
assignin('base','a',100);

if isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor',[.9 .9 .9]);
end


% --- Executes on slider movement.
function slider2_Callback(hObject, eventdata, handles)
slider2 = get(hObject,'Value');
assignin('base','p',slider2);
set(handles.text2,'String',["p = ", num2str(slider2)]);


% --- Executes during object creation, after setting all properties.
function slider2_CreateFcn(hObject, eventdata, handles)
assignin('base','p',1);

if isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor',[.9 .9 .9]);
end


% --- Executes on slider movement.
function slider3_Callback(hObject, eventdata, handles)
slider3 = get(hObject,'Value');
assignin('base','L',slider3);
set(handles.text3,'String',["L = ", num2str(slider3)]);


% --- Executes during object creation, after setting all properties.
function slider3_CreateFcn(hObject, eventdata, handles)
assignin('base','L',1000);

if isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor',[.9 .9 .9]);
end
