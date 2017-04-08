"
" MAIN CUSTOMIZATION FILE
"


" Enable loading filetype and indentation plugins
filetype plugin on
filetype indent on

" Turn syntax highlighting on
syntax on
"au Syntax php   source /usr/share/vim/vim61/syntax/php.vim
"au Syntax tpl   source /usr/share/vim/vim61/syntax/html.vim
"let php_sql_query = 1
"let php_baselib = 1
"let php_oldStyle = 1

" Use smart indentation
set smartindent

"
" GLOBAL SETTINGS
"

" Write contents of the file, if it has been modified, on buffer exit
set autowrite
set nobackup


" autoload _vimrc
"autocmd! bufwritepost .vimrc source ~/.vimrc

" Allow backspacing over everything
set backspace=indent,eol,start

" Insert mode completion options
" set completeopt=menu,longest,preview
"c the default buffer encoding
" set enc=gb2312
set enc=utf-8

" encoding detection
" set fencs=gb2312,utf-8,big5,utf-16
" set fencs=utf-8
set fencs=utf-8,gbk,gb2312

set fileencodings=utf-8,gbk,gb2312

" Remember up to 100 'colon' commmands and search patterns
set history=100

" Enable incremental search
set incsearch

" Always show status line, even for one window
set laststatus=2

" Jump to matching bracket for 2/10th of a second (works with showmatch)
set matchtime=2

" Don't highlight results of a search
set hlsearch

" Enable CTRL-A/CTRL-X to work on octal and hex numbers, as well as characters
set nrformats=octal,hex,alpha

" Use F10 to toggle 'paste' mode
"set pastetoggle=<F10>

" Show line, column number, and relative position within a file in the status line
set ruler

" Scroll when cursor gets within 3 characters of top/bottom edge
set scrolloff=3


"When .vimrc is edited, reload it 
autocmd! bufwritepost .vimrc source ~/.vimrc

set shiftround

" Use 4 spaces for (auto)indent
set shiftwidth=4

" Show (partial) commands (or size of selection in Visual mode) in the status line
set showcmd

" When a bracket is inserted, briefly jump to a matching one
set showmatch

" Don't request terminal version string (for xterm)
set t_RV=

" Use 4 spaces for <Tab> and :retab
set tabstop=4
set softtabstop=4

" Use spaces for all tabs
" set expandtab

" Write swap file to disk after every 50 characters
set updatecount=50

" Remember things between sessions
"
" '20  - remember marks for 20 previous files
" "50 - save 50 lines for each register
" :20  - remember 20 items in command-line history 
" %    - remember the buffer list (if vim started without a file arg)
" n    - set name of viminfo file
set viminfo='20,\"50,:20,%,n~/.viminfo

" Use menu to show command-line completion (in 'full' case)
set wildmenu

" Set command-line completion mode:
"   - on first <Tab>, when more than one match, list all matches and complete
"     the longest common  string
"   - on second <Tab>, complete the next full match and show menu
set wildmode=list:longest,full

" Go back to the position the cursor was on the last time this file was edited
au BufReadPost * if line("'\"") > 0 && line("'\"") <= line("$")|execute("normal `\"")|endif

" Fix my <Backspace> key (in Mac OS X Terminal)
" set t_kb=
" fixdel

" Avoid loading MatchParen plugin
let loaded_matchparen = 1

" netRW: Open files in a split window
let g:netrw_browse_split = 1

"
" MAPPINGS
"

" save changes
map ,s :w<CR>
" exit vim without saving any changes
map ,q :q!<CR>
" exit vim saving changes
map ,w :x<CR>
" switch to upper/lower window quickly
map <C-J> <C-W>j
"map <C-K> <C-W>k


" use CTRL-F for omni completion
imap <C-F> 
" map ,f to display all lines with keyword under cursor and ask which one to
" jump to
nmap ,f [I:let nr = input("Which one: ")<Bar>exe "normal " . nr ."[\t"<CR>
" use <F6> to toggle line numbers
nmap <silent> <F6> :set number!<CR>
" page down with <Space>
nmap <Space> <PageDown>
" open filename under cursor in a new window (use current file's working
" directory) 
nmap gf :new %:p:h/<cfile><CR>
" map <Alt-p> and <Alt-P> to paste below/above and reformat
nnoremap <Esc>P  P'[v']=
nnoremap <Esc>p  p'[v']=
" visual shifting (does not exit Visual mode)
vnoremap < <gv
vnoremap > >gv 

" Generic highlight changes
highlight Comment cterm=none ctermfg=Gray
highlight IncSearch cterm=none ctermfg=Black ctermbg=DarkYellow
highlight Search cterm=none ctermfg=Black ctermbg=DarkYellow
highlight String cterm=none ctermfg=DarkGreen
highlight treeDir cterm=none ctermfg=Cyan
highlight treeUp cterm=none ctermfg=DarkYellow
highlight treeCWD cterm=none ctermfg=DarkYellow
highlight netrwDir cterm=none ctermfg=Cyan
set number
set fileformats=unix
"
" NERDTree configuration
"

" Increase window size to 35 columns
" let NERDTreeWinSize=35

" map <F7> to toggle NERDTree window
" nmap <silent> <F7> :NERDTreeToggle<CR>

"
" Some tab configuration
"

" Create tab
" nmap <C-T> :tabnew<cr>
" imap <C-T> <ESC>:tabnew<cr>

" Close tab
" nmap <C-W> :tabclose<CR>

" Ctrl+<Left> Ctrl+<Right> to swich tabs
" map [D :tabprev<cr>
" imap [D <ESC>:tabprev<cr>
" map [C :tabnext<cr>
" imap [C <ESC>:tabnext<cr>

" vim -p limit
" set tabpagemax=1000
"

map 1G112> :set enc=cp936<cr>:set tenc=utf8<cr>

" Hooks
"autocmd BufWritePost,FileWritePost *.php !scp -p <afile> wangqingming@tc-nasdaq.tc.baidu.com:~/modified/<afile>
"


"""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
set foldenable
setlocal foldlevel=1


au FileType html,python,vim,javascript setl shiftwidth=2
au FileType html,python,vim,javascript setl tabstop=2
au FileType java,php setl shiftwidth=4
au FileType java,php setl tabstop=4

set smarttab
set lbr
set tw=0
 
"Auto indent
set ai
 
" " Smart indet
set si
  
" C-style indeting
set cindent
   
" Wrap lines
set wrap


map <F8> :bufexplorer<CR>

" ????FuzzyFinder
let mapleader = "\\"
map <leader>F :FufFile<CR>
map <leader>f :FufTaggedFile<CR>
map <leader>g :FufTag<CR>
map <leader>b :FufBuffer<CR>

"对NERD_commenter的设置
let NERDShutUp=1
map <C-_> <plug>NERDCommenterToggle

" ????NERDTREE
map <F10> :NERDTreeToggle<CR>
let NERDTreeWinSize=22

" ????Minibufexpl

let g:miniBufExplMapWindowNavVim = 1 
let g:miniBufExplMapWindowNavArrows = 1 
let g:miniBufExplMapCTabSwitchBufs = 1 
let g:miniBufExplModSelTarget = 1 


"???÷??????л??ļ?buf
map <F3> :bp<CR>
map <F4> :bn<CR>
"map <F2> :bn<CR>
"map <C-,> :bp<cr>


"Ctags
set tags=tags;
"TAGlist
let Tlist_Show_One_File=1
let Tlist_Exit_OnlyWindow=1
let Tlist_Use_Right_Window = 1 "???Ҳര??????ʾtaglist????
map <F9> :TlistToggle<CR>


"??ɫ????
set hls
set nocompatible
set sw=3
set showmatch
set background=dark
"colorscheme desert


highlight Search term=reverse ctermbg=4 ctermfg=7
highlight Normal ctermbg=black ctermfg=white
highlight Comment ctermfg=blue


"???õ???????

"map <C-K> :vertical res -5<CR>
"map <C-l> :vertical res +5<CR>


"set mouse=a
"set selection=exclusive
"set selectmode=mouse,key





